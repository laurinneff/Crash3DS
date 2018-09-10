#include <3ds.h>
#include "tinyexpr.h"

int main(int argc, char **argv)
{
	gfxInitDefault();

	te_interp(NULL, 0);

	// Exit services
	gfxExit();
	return 0;
}
