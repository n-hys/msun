#include <sys/cdefs.h>
__FBSDID("$FreeBSD$");

#define _type		long double
#define	roundit		rintl
#define dtype		long long
#define	fn		llrintl

#include "s_lrint.c"
