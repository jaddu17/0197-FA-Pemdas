#include <iostream>
using namespace std;
class MasukUniversitas {
private:
	int uangPendaftaran;
	int uangSemesterPertama;
	int uangBangunan;
	int totalBiaya;
public:
	MasukUniversitas() {
		uangPendaftaran = 0;
		uangSemesterPertama = 0;
		uangBangunan = 0;
		totalBiaya = 0;
	}

	virtual void namaJalurMasuk() { 
		cout << "Nama Jalur Masuk";
		return; 
	}

	virtual void hitungTotalBiaya() {
		cout << "Hitung Total Biaya";
		return;
	}

	virtual void tampilkanTotalBiaya() {
		cout << "Tampilkan Total Biaya";
		return;
	}

	virtual void input() {
		return;
	} 
	
	void setUangPendaftaran(int nilai) {
		this->uangPendaftaran = nilai;
	}
	float getUangPendaftaran() {
		return uangPendaftaran;
	}

	void setUangSemesterPertama(int nilai) {
		this->uangSemesterPertama = nilai;
	}
	float getUangSemesterPertama() {
		return uangSemesterPertama;
	}

	void setUangBangunan(int nilai) {
		this->uangBangunan = nilai;
	}
	float getUangBangunan() {
		return uangBangunan;
	}

	void setTotalBiaya(int nilai) {
		this->totalBiaya = nilai;
	}
	float getTotalBiaya() {
		return totalBiaya;
	}
	// isi setter dan getter variable yang dibutuhkan di bawah ini
};
class SNBT : public MasukUniversitas {
	// isi disini untuk melengkapi class SNBT
public:
	void input() {
		int uangPendaftaran;
		int uangSemesterPertama;
		int uangBangunan;

		cout << " Masukan Uang Pendaftaran = ";
		cin >> uangPendaftaran;
		setUangPendaftaran(uangPendaftaran);
		cout << " Masukan Uang untuk Semester Pertama = ";
		cin >> uangSemesterPertama;
		setUangSemesterPertama(uangSemesterPertama);
		cout << " Masukan Uang Bangunan = ";
		cin >> uangBangunan;
		setUangBangunan(uangBangunan);
	}
	
	void hitungTotalBiaya()
	{
		int total = getUangBangunan() + getUangPendaftaran() + getUangSemesterPertama();
		setTotalBiaya(total);
	}

	void tampilkanTotalBiaya()
	{
		cout << "Total Biaya: " << getTotalBiaya() << endl;
		if (getTotalBiaya() > 250000000)
		{
			cout << "Kategori : Mahal";
		}
		else if (getTotalBiaya() > 100000000)
		{
			cout << "Kategori : Sedang";
		}
		else 
		{
			cout << "Kategori : Murah";
		}
	}
};
class SNBP : public MasukUniversitas {
	// isi disini untuk melengkapi class SNBP
public:
	void input() {
		int uangPendaftaran;
		int uangSemesterPertama;
		int uangBangunan;

		cout << " Masukan Uang Pendaftaran = ";
		cin >> uangPendaftaran;
		setUangPendaftaran(uangPendaftaran);
		cout << " Masukan Uang untuk Semester Pertama = ";
		cin >> uangSemesterPertama;
		setUangSemesterPertama(uangSemesterPertama);
		cout << " Masukan Uang Bangunan = ";
		cin >> uangBangunan;
		setUangBangunan(uangBangunan);
	}
	
	void hitungTotalBiaya()
	{
		int total = getUangBangunan() + getUangPendaftaran() + getUangSemesterPertama();
		setTotalBiaya(total);
	}

	void tampilkanTotalBiaya()
	{
		cout << "Total Biaya: " << getTotalBiaya() << endl;
		if (getTotalBiaya() > 50000000)
		{
			cout << "Kategori : Mahal";
		}
		else if (getTotalBiaya() > 10000000)
		{
			cout << "Kategori : Sedang";
		}
		else 
		{
			cout << "Kategori : Murah";
		}
	}
};
int main() {
	// isi disini untuk fungsi main
}