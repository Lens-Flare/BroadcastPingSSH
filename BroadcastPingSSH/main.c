//
//  main.c
//  BroadcastPingSSH
//
//  Created by Ethan Reesor on 9/9/13.
//  Copyright (c) 2013 Lens Flare. All rights reserved.
//


#include <netinet/in.h>
#include <stdio.h>

// broadcast address
struct bc_addr {
	uint32_t addr, mask;
};

struct bc_addr defaults[] = {
	{0xA9FE0000, 0xFFFF0000}, // 169.254.0.0/16
	{0x0A000000, 0xFF000000}, // 10. 0.  0.0/8
	{0xAC100000, 0xFFF00000}, // 172.16. 0.0/12
	{0xC0A80000, 0xFFFF0000}  // 192.168.0.0/16
};

void usage(char *prog)
{
	fprintf(stderr,
			"%1$s\n"
			"    Equvalent to `%1$s -d 0`\n\n"
			"%1$s -d <num>\n"
			"    Calls `%1$s <subnet> with one of the default subnets:\n"
			"      <num> is 0, <subnet> is 169.254.0.0/16\n"
			"               1,             10. 0  .0.0/8\n"
			"               2,             172.16 .0.0/12\n"
			"               3,             192.168.0.0/16\n\n"
			"%1$s <subnet>\n"
			"    Pings the broadcast address of <subnet>, generates a list of\n"
			"    addresses, and attempts to SSH to the selected host.\n"
			"    <subnet> should match either '<addr>/<mask>' or '<addr> <mask>'\n"
			"    where <addr> is a dot-decimal notation IP address and <mask>\n"
			"    is either N where N is the length of the network portion in\n"
			"    bytes or a dot-decimal notation subnet mask, respectively.\n\n"
			"Examples:\n"
			"    %1$s\n"
			"    %1$s -d 0\n"
			"    %1$s 169.254../16\n"
			"    %1$s 169.254.0.0/16\n"
			"    %1$s 169.254.0.0 255.255.0.0\n"
			,prog);
}

int main(int argc, const char * argv[])
{

    return 0;
}

