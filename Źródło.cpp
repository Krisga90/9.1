#include <iostream>
#include "golf.h"

int main()
{
	golf gracz_1,gracz_2[3];
	set_golf(gracz_1, "Marian trabka", 1);
	show_golf(gracz_1);
	for (int i = 0; i < 3; i++)
	{
		set_golf(gracz_2[i]);
		show_golf(gracz_2[i]);
	}
	handicap(gracz_1,4);
	show_golf(gracz_1);

	std::cin.get();
	return 0;
}