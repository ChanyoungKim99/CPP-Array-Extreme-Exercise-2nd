#include <iostream>

int main()
{
	int snailArray[5][5]{ 1 };
	
	for(int i = 0; i < 5; i++)
	{
		snailArray[0][i] = i + 1;
		snailArray[i][4] = i + 5;
		snailArray[4][4 - i] = i + 9;
	}

	for (int j = 0; j < 4; j++)
	{
		snailArray[4 - j][0] = j + 13;
		snailArray[1][j] = j + 16;
	}

	for (int k = 0; k < 3; k++)
	{
		snailArray[k + 1][3] = k + 19;
		snailArray[3][3 - k] = k + 21;
	}

	for (int l = 0; l < 2; l++)
	{
		snailArray[2][l + 1] = l + 24;
	}
	
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i == 0)
			{
				std::cout << snailArray[i][j] << " ";
			}

			else
			{
				std::cout << snailArray[i][j];
			}
		}
		std::cout << std::endl;
	}
}