/*
 * Copyright © 2011  Google, Inc.
 *
 *  This is part of HarfBuzz, a text shaping library.
 *
 * Permission is hereby granted, without written agreement and without
 * license or royalty fees, to use, copy, modify, and distribute this
 * software and its documentation for any purpose, provided that the
 * above copyright notice and the following two paragraphs appear in
 * all copies of this software.
 *
 * IN NO EVENT SHALL THE COPYRIGHT HOLDER BE LIABLE TO ANY PARTY FOR
 * DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES
 * ARISING OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN
 * IF THE COPYRIGHT HOLDER HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH
 * DAMAGE.
 *
 * THE COPYRIGHT HOLDER SPECIFICALLY DISCLAIMS ANY WARRANTIES, INCLUDING,
 * BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
 * FITNESS FOR A PARTICULAR PURPOSE.  THE SOFTWARE PROVIDED HEREUNDER IS
 * ON AN "AS IS" BASIS, AND THE COPYRIGHT HOLDER HAS NO OBLIGATION TO
 * PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS.
 *
 * Google Author(s): Behdad Esfahbod
 */

/* This file tests that all headers can be included from C files */

#include "hb-test.h"

#include <hb.h>
#include <hb-subset.h>
#include <hb-ot.h>
#include <hb-aat.h>

#ifdef HAVE_CAIRO
#include <hb-cairo.h>
#endif

#ifdef HAVE_CORETEXT
#include <hb-coretext.h>
#endif

#ifdef HAVE_FREETYPE
#include <hb-ft.h>
#endif

#ifdef HAVE_FONTATIONS
#include <hb-fontations.h>
#endif

#ifdef HAVE_GDI
#include <hb-gdi.h>
#endif

#ifdef HAVE_GLIB
#include <hb-glib.h>
#endif

#ifdef HAVE_GRAPHITE2
#include <hb-graphite2.h>
#endif

#ifdef HAVE_GOBJECT
//#include <hb-gobject.h> // Doesn't work uninstalled
#endif

#ifdef HAVE_ICU
#include <hb-icu.h>
#endif

#ifdef HAVE_UNISCRIBE
#include <hb-uniscribe.h>
#endif

#ifndef NO_MAIN
static void
test_list_shapers (void)
{
  const char *first = *hb_shape_list_shapers ();
  g_assert_true (first);
}

int
main (int argc, char **argv)
{
  hb_test_init (&argc, &argv);

  hb_test_add (test_list_shapers);

  return hb_test_run ();
}
#endif
