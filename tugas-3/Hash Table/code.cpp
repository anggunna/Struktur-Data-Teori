#include <iostream>
#include <unordered_map>
#include <vector>

struct Mahasiswa {
    std::string nim;
    int nilai;
};

class HashTable {
public:
    void tambahData(const std::string& nim, int nilai) {
        if (data.find(nim) != data.end()) {
            std::cout << "Data dengan NIM " << nim << " sudah ada.\n";
        } else {
            data[nim] = nilai;
            std::cout << "Data berhasil ditambahkan.\n";
        }
    }

    void hapusData(const std::string& nim) {
        if (data.erase(nim)) {
            std::cout << "Data dengan NIM " << nim << " berhasil dihapus.\n";
        } else {
            std::cout << "Data dengan NIM " << nim << " tidak ditemukan.\n";
        }
    }

    void cariDataNIM(const std::string& nim) {
        auto it = data.find(nim);
        if (it != data.end()) {
            std::cout << "NIM: " << it->first << ", Nilai: " << it->second << "\n";
        } else {
            std::cout << "Data dengan NIM " << nim << " tidak ditemukan.\n";
        }
    }

    void cariDataNilai(int minNilai, int maxNilai) {
        std::vector<Mahasiswa> hasil;
        for (const auto& pair : data) {
            if (pair.second >= minNilai && pair.second <= maxNilai) {
                hasil.push_back({pair.first, pair.second});
            }
        }
        if (hasil.empty()) {
            std::cout << "Tidak ada data yang ditemukan dalam rentang nilai " << minNilai << " - " << maxNilai << ".\n";
        } else {
            std::cout << "Data dalam rentang nilai " << minNilai << " - " << maxNilai << ":\n";
            for (const auto& mhs : hasil) {
                std::cout << "NIM: " << mhs.nim << ", Nilai: " << mhs.nilai << "\n";
            }
        }
    }

private:
    std::unordered_map<std::string, int> data;
};

int main() {
    HashTable ht;
    int pilihan;
    std::string nim;
    int nilai;
    int minNilai, maxNilai;

    do {
        std::cout << "Menu:\n";
        std::cout << "1. Tambah data\n";
        std::cout << "2. Hapus data\n";
        std::cout << "3. Cari data berdasarkan NIM\n";
        std::cout << "4. Cari data berdasarkan rentang nilai (80 - 90)\n";
        std::cout << "5. Keluar\n";
        std::cout << "Pilih opsi: ";
        std::cin >> pilihan;

        switch (pilihan) {
            case 1:
                std::cout << "Masukkan NIM: ";
                std::cin >> nim;
                std::cout << "Masukkan nilai: ";
                std::cin >> nilai;
                ht.tambahData(nim, nilai);
                break;
            case 2:
                std::cout << "Masukkan NIM: ";
                std::cin >> nim;
                ht.hapusData(nim);
                break;
            case 3:
                std::cout << "Masukkan NIM: ";
                std::cin >> nim;
                ht.cariDataNIM(nim);
                break;
            case 4:
                minNilai = 80;
                maxNilai = 90;
                ht.cariDataNilai(minNilai, maxNilai);
                break;
            case 5:
                std::cout << "Keluar dari program.\n";
                break;
            default:
                std::cout << "Pilihan tidak valid.\n";
        }
    } while (pilihan != 5);

    return 0;
}