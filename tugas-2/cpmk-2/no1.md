### Bubble Sort

Algoritma Bubble Sort bekerja dengan cara membandingkan dua elemen yang berdekatan secara berulang dan menukarnya jika elemen pertama lebih besar daripada elemen kedua. Proses ini diulangi hingga semua elemen terurut.

Alur:

Iterasi melalui array dari awal hingga akhir.
Bandingkan elemen saat ini dengan elemen berikutnya.
Jika elemen saat ini lebih besar, tukar kedua elemen.
Jika tidak ada lagi pertukaran, hentikan iterasi.
Ulangi langkah 1-4 hingga semua elemen terurut.
Runtime:

Best Case: O(n) - Ketika array sudah terurut, Bubble Sort hanya perlu satu iterasi untuk memverifikasinya.
Worst Case: O(n^2) - Ketika array terbalik, Bubble Sort membutuhkan n iterasi untuk menukar semua elemen.

### Selection Sort

Algoritma Selection Sort bekerja dengan cara menemukan elemen minimum dalam array dan menukarnya dengan elemen pertama. Proses ini diulangi hingga semua elemen terurut.

Alur:

Temukan elemen minimum dalam array yang belum terurut.
Tukar elemen minimum dengan elemen pertama dalam array yang belum terurut.
Ulangi langkah 1-2 hingga semua elemen terurut.
Runtime:

Best Case: O(n) - Ketika array sudah terurut, Selection Sort hanya perlu satu iterasi untuk memverifikasinya.
Worst Case: O(n^2) - Ketika array acak, Selection Sort membutuhkan n iterasi untuk menemukan elemen minimum di setiap iterasi.

### Merge Sort

Algoritma Merge Sort bekerja dengan cara membagi array menjadi dua subarray secara berulang, mengurutkan subarray secara rekursif, dan kemudian menggabungkan subarray yang terurut menjadi satu array yang terurut.

Alur:

Jika array memiliki lebih dari satu elemen, bagi array menjadi dua subarray yang sama besar.
Urutkan subarray secara rekursif menggunakan Merge Sort.
Gabungkan subarray yang terurut menjadi satu array yang terurut.
Runtime:

Best Case: O(n log n) - Ketika array sudah terurut, Merge Sort hanya membutuhkan n log n operasi untuk menggabungkan subarray.
Worst Case: O(n log n) - Ketika array acak, Merge Sort membutuhkan n log n operasi untuk membagi dan menggabungkan subarray.