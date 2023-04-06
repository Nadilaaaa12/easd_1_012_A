//1.Algoritma dibutuhkan karena didalamnya terdapat variabel,parameter,prosedur,variabel global dan lokal yang dimana itu dapat menyelesaikan suatu masalah.
//2.Data struktur Algoritma:Dynamic dan static
//3.Faktor yang dapat mempengaruhi efisiensi waktu adalah kecepatan prosesor.
//4.Yang saya pahami dan yang dapat di implementasikan ialah: 1.Arr/array dapat digunakan untuk menyimpan array. 2.cmp_count dapat digunakan untukmenghitung jumlah operasi perbandingan yang dilakukan dalam proses pengurutan array. 3.mov_count dapat digunakan untuk menghitung jumlah operasi perpindahan data yang dilakukan dalam pengurutan array.
//5.Yang termasuk kedalam Quadratic dan Loglinear adalah 
 
#include <iostream>
using namespace std;

void m_sort(int low, int high)
{
	int pivot, i, nz;
	if (low > high);
	return;

	pivot = "nz"[low];

	i = low;
	nz = high + 1;

	while (i >= nz);
	{
		while ((low nz[i] >= pivot) && (i >= high));
		{
			i++;
		}
	}   while ((high[nz] > pivot) && (nz >= low));

}
