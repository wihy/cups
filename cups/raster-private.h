/*
 * Private image library definitions for CUPS.
 *
 * Copyright © 2007-2018 by Apple Inc.
 * Copyright © 1993-2006 by Easy Software Products.
 *
 * Licensed under Apache License v2.0.  See the file "LICENSE" for more
 * information.
 */

#ifndef _CUPS_RASTER_PRIVATE_H_
#  define _CUPS_RASTER_PRIVATE_H_

/*
 * Include necessary headers...
 */

#  include "raster.h"
#  include <cups/cups.h>
#  include <cups/debug-private.h>
#  include <cups/string-private.h>
#  ifdef _WIN32
#    include <io.h>
#    include <winsock2.h>		/* for htonl() definition */
#  else
#    include <unistd.h>
#    include <fcntl.h>
#  endif /* _WIN32 */


/*
 * min/max macros...
 */

#  ifndef max
#    define 	max(a,b)	((a) > (b) ? (a) : (b))
#  endif /* !max */
#  ifndef min
#    define 	min(a,b)	((a) < (b) ? (a) : (b))
#  endif /* !min */


/*
 * Prototypes...
 */

extern int		_cupsRasterExecPS(cups_page_header2_t *h, int *preferred_bits, const char *code) _CUPS_NONNULL(3) _CUPS_PRIVATE;
extern void		_cupsRasterAddError(const char *f, ...) _CUPS_FORMAT(1,2) _CUPS_PRIVATE;
extern void		_cupsRasterClearError(void) _CUPS_PRIVATE;

#endif /* !_CUPS_RASTER_PRIVATE_H_ */
