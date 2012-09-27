/*
 * Unloved program to convert a binary on stdin to a C include on stdout
 * [[summary]]
   [[most important information]]
 * Jan 1999 Matt Mackall <mpm@selenic.com>
 * [[author]]
 * This software may be used and distributed according to the terms
 * of the GNU General Public License, incorporated herein by reference.
 * [[short GPL preamble -- license]]
 * [[incredible complication of license -- ninka by German]]
 */

#include <stdio.h>
/* language dependent issues */
int main(int argc, char *argv[])
{
	int ch, total=0;
        /* ch means character? -- not switzerland */
        /* total of what */
        /* some langs use more abbreviations */
        /* common variable names versus uncommon variable names */
        /* note that this function/method is unnamed */
        /* weighting schemes */
	if (argc > 1) /* importance of argc, commandline api */
          
		printf("const char %s[] %s=\n",
                       /* with some intelligence you could identify
                          that this produces this string */
                       /* paper: string constant traceability */
                       /* this is printing C code */
                       /* detect context of printf */
			argv[1], argc > 2 ? argv[2] : "");
        /* argv is commandline api */
	do {
		printf("\t\"");
                /* getchar is part of the description */
		while ((ch = getchar()) != EOF) /* EOF -> IO */
                  /* while condition is API */
                  /* too frequent and mostly noise in many IR cases */
		{
			total++;
			printf("\\x%02x",ch);
			if (total % 16 == 0)
				break;
		}
                /* idiomatic */
                /* hard for an ir model to use */
		printf("\"\n");
	} while (ch != EOF);

	if (argc > 1)
		printf("\t;\n\nconst int %s_size = %d;\n", argv[1], total);
        /* bad example, no comments */
        /* we looked at this file from the use case of bug localization/
           mapping if it occurred in bin2c.c */
           
        
        
	return 0;
}
