### Binary Search

Algoritma Binary Search hanya bekerja pada data yang terurut. Algoritma ini bekerja dengan cara membagi array menjadi dua bagian secara berulang dan mencari elemen yang dicari di bagian yang kemungkinan besar memuatnya.

Alur:

Tentukan nilai tengah dari array.
Bandingkan elemen yang dicari dengan nilai tengah.
Jika elemen yang dicari sama dengan nilai tengah, elemen tersebut telah ditemukan.
Jika elemen yang dicari lebih kecil daripada nilai tengah, cari elemen di bagian kiri array.
Jika elemen yang dicari lebih besar daripada nilai tengah, cari elemen di bagian kanan array.
Ulangi langkah 1-5 hingga elemen yang dicari ditemukan atau seluruh array telah diperiksa.
Runtime:

Best Case: O(1) - Ketika elemen yang dicari ditemukan di tengah array dalam satu iterasi.
Worst Case: O(log n) - Ketika elemen yang dicari tidak ditemukan dan seluruh array perlu diperiksa dalam log n iterasi, di mana n adalah jumlah elemen dalam array.

### Linear Search

Algoritma Linear Search bekerja pada data yang tidak terurut atau terurut. Algoritma ini bekerja dengan cara membandingkan elemen yang dicari dengan setiap elemen dalam array secara berurutan.

Alur:

Iterasi melalui array dari awal hingga akhir.
Bandingkan elemen yang dicari dengan elemen saat ini.
Jika elemen yang dicari sama dengan elemen saat ini, elemen tersebut telah ditemukan.
Jika seluruh array telah diperiksa dan elemen yang dicari tidak ditemukan, elemen tersebut tidak ada dalam array.
Runtime:

Best Case: O(1) - Ketika elemen yang dicari ditemukan di awal array dalam satu iterasi.
Worst Case: O(n) - Ketika elemen yang dicari tidak ditemukan dan seluruh array perlu diperiksa dalam n iterasi, di mana n adalah jumlah elemen dalam array.