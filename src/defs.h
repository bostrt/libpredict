#ifndef _PREDICT_DEFS_H_
#define _PREDICT_DEFS_H_

#include <float.h>

/* Mathematical convenience constants used by sgp4/sdp4 and related routines */
// pi
#define PI		3.14159265358979323846
// pi/2
#define PI_HALF 	1.57079632679489656
// 2*pi
#define TWO_PI          6.28318530717958623
// 3*pi/2
#define THREE_PI_HALF	4.71238898038468967
// 2/3
#define TWO_THIRD	6.6666666666666666E-1

/* Time convenience constants */
//Number of minutes per day
#define MINUTES_PER_DAY	1.44E3
//Number of seconds per day
#define SECONDS_PER_DAY	8.6400E4

/* Physical properties */
//J3 Harmonic (WGS '72)
#define J3_HARMONIC_WGS72 			-2.53881E-6
//WGS 84 Earth radius km
#define EARTH_RADIUS_KM_WGS84			6.378137E3
//Flattening factor
#define FLATTENING_FACTOR 			3.35281066474748E-3
//Earth rotations per siderial day
#define EARTH_ROTATIONS_PER_SIDERIAL_DAY	1.00273790934
//Solar radius in kilometers (IAU 76)
#define SOLAR_RADIUS_KM 			6.96000E5
//Astronomical unit in kilometers (IAU 76)
#define ASTRONOMICAL_UNIT_KM 			1.49597870691E8
//Upper elevation threshold for nautical twilight
#define NAUTICAL_TWILIGHT_SUN_ELEVATION 	-12.0
//Speed of light in vacuum
#define SPEED_OF_LIGHT				299792458.0
//Angular velocity of Earth in radians per seconds
#define EARTH_ANGULAR_VELOCITY			7.292115E-5

/* Iteration constants */
//Threshold used for fine-tuning of AOS/LOS
#define AOSLOS_HORIZON_THRESHOLD 	0.3
//Threshold used for comparing lower and upper brackets in find_max_elevation
#define MAXELE_TIME_EQUALITY_THRESHOLD 	FLT_EPSILON
//Maximum number of iterations in find_max_elevation
#define MAXELE_MAX_NUM_ITERATIONS 	10000

/**
 * Spacetrack report #3 constants also used outside of SGP4/SDP4 code.
 * The constants/symbols are defined on page 76 to page 78 in the report.
 **/
//k_e = sqrt(Newton's universal gravitational * mass of the Earth), in units (earth radii per minutes)^3/2
#define XKE		7.43669161E-2
//Corresponds to 1/2 * J_2 * a_E^2. J_2 is the second gravitational zonal harmonic of Earth, a_E is the equatorial radius of Earth.
#define CK2		5.413079E-4

/**
 * Spacetrack report #3 constants used only by SGP4/SDP4 code.
 * The constants/symbols are defined on page 76 to page 78 in the report.
 **/
//Shorthand for 10^-6.
#define E6A		1.0E-6
//Distance units / Earth radii.
#define AE		1.0
//Corresponds to -3/8 * J_4 * a_E^4, where J_4 is the fourth gravitational zonal harmonic of Earth.
#define CK4		6.209887E-7
//Parameter for SGP4/SGP8 density function.
#define S_DENSITY_PARAM	1.012229
//Corresponds to (q_0 - s)^4 in units (earth radii)^4, where q_0 and s are parameters for the SGP4/SGP8 density function.
#define QOMS2T		1.880279E-09

/**
 * Constants in deep space subroutine. Not defined in spacetrack report #3.
 * The constants might be defined in Hujsak (1979) and Hujsak and Hoots (1977).
 **/
#define zns		1.19459E-5
#define c1ss		2.9864797E-6
#define zes		1.675E-2
#define znl		1.5835218E-4
#define c1l		4.7968065E-7
#define zel		5.490E-2
#define zcosis		9.1744867E-1
#define zsinis		3.9785416E-1
#define zsings		-9.8088458E-1
#define zcosgs		1.945905E-1
#define q22		1.7891679E-6
#define q31		2.1460748E-6
#define q33		2.2123015E-7
#define g22		5.7686396
#define g32		9.5240898E-1
#define g44		1.8014998
#define g52		1.0508330
#define g54		4.4108898
#define root22		1.7891679E-6
#define root32		3.7393792E-7
#define root44		7.3636953E-9
#define root52		1.1428639E-7
#define root54		2.1765803E-9
#define thdt           4.3752691E-3

#endif
