#pragma once
//������� ������ ���������� � �������.
template <typename T1>
void Search(T1 array[], const int N)
{
	int dynamicrange = 1;
	int count = 1;
	T1* arr = new T1[dynamicrange];
	for (int i = 0; i < N - 1; i++)
	{
		if (SearchTarget(arr, dynamicrange, array[i]))
			continue;
		for (int j = i + 1; j < N; j++)
		{
			if (array[i] == array[j])
			{
				count++;
			}
		}
		if (count > 1)
		{
			arr[dynamicrange - 1] = array[i];
			cout << "����� - " << arr[dynamicrange - 1] << " ����������� - " << count << " ���" << endl;
			dynamicrange++;
		}
		count = 1;
	}
}
template <typename T1>
void Search(T1 array[N1][N2], const int N1, const int N2)
{
	int dynamicrange = 1;
	int count = 1;
	T1* arr = new T1[dynamicrange];
	for (int k = 0; k < N1; k++)
		for (int i = 0; i < N2 - 1; i++)
		{
			if (SearchTarget(arr, dynamicrange, array[k][i]))
				continue;
			for (int j = i + 1; j < N2; j++)
			{
				if (array[k][i] == array[k][j])
				{
					count++;
				}
			}
			if (count > 1)
			{
				arr[dynamicrange - 1] = array[k][i];
				cout << "����� - " << arr[dynamicrange - 1] << " ����������� - " << count << " ���" << endl;
				dynamicrange++;
			}
			count = 1;
		}
}
//������� ������ �������� � �������, ���������� true ��� false, ���� �������� �������/�� �������.
template <typename T1>
bool SearchTarget(T1 array[], int N, T1 TargetKey)
{
	for (int i = 0; i < N; i++)
		if (array[i] == TargetKey) return true;
	return false;
}
template <typename T1>
bool SearchTarget(T1 array[N1][N2], int N1, int N2, T1 TargetKey)
{
	for (int i = 0; i < N1; i++)
		for (int j = 0; j < N2; j++)
			if (array[i][j] == TargetKey) return true;
	return false;
}