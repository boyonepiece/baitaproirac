#include <iostream>

using namespace std;

int main()
{
	int n[100000][2];
	cout << "Nhap so canh: ";
	int canh; cin >> canh;
	int bac[100000];
	for (int i = 0; i < canh+1; i++)
	{
		bac[i] = 0;
	}
	for (int i = 1; i <= canh; i++)
	{
		cin >> n[i][1] >> n[i][2];
		bac[n[i][1]]++;
		bac[n[i][2]]++;
	}
	int dem = canh;
	while (dem-1)
		{
			for (int k = 1; k <= canh; k++)
				{
					if (bac[k] == 1)
						{
							for (int i = 1; i <= canh; i++)
								{
									if (n[i][1] == k)
										{
											cout << n[i][2] << " ";
											bac[n[i][2]]--;
											n[i][2] = n[i][1] = -1;
											continue;
										}
									else
									{
										if (n[i][2] == k)
										{
											cout << n[i][1] << " ";
											bac[n[i][1]]--;
											n[i][2] = n[i][1] = -1;
										}
									}
								}
							bac[k]--;
							break;
						}

				}
			dem--;
	}
	return 0;
}
