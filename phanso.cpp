#include<iostream>
using namespace std;
class phanso
{
	private:
		int tuso;
		int mauso;
	public:
		phanso(int tuso=0, int mauso=0)
			{
				this->tuso=tuso;
				this->mauso=mauso;
			}
		~phanso()
			{
				
			}
		void nhap()
			{
				cout<<"\tNhap tu so : ";
				cin>>tuso;
				cout<<"\tNhap mau so : ";
				cin>>mauso;
			}
		int UCLN(int a, int b)
			{
				//truong hop a < b !!!!
				if(a + b == a or a + b == b)
					{
						return a+b;
					}
				else if(a < b)
					{
						for(int i=a; i > 1 ; i--)
							{
								if(b%i == 0 and a%i == 0)
									{
										return i;
									}
							}
					}
				else
					{
						for(int i=b; i > 1 ; i--)
							{
								if(b%i == 0 and a%i == 0)
									{
										return i;
									}
							}
					}
			}
		void tong(phanso ps)
			{
				phanso a;
				a.tuso = this->tuso * ps.mauso + this->mauso * ps.tuso;
				a.mauso = this->mauso * ps.mauso;
				int ucln = UCLN(a.tuso, a.mauso);
				if(a.tuso % a.mauso == 0)
					{
						cout<<"Tong hai phan so la : "<<(a.tuso/ucln)/(a.mauso/ucln);
					}
				else
					{
						cout<<"Tong hai phan so la : "<<a.tuso/ucln<<"/"<<a.mauso/ucln;
					}
			}
		void xuat()
			{
				cout<<tuso<<"/"<<mauso;
			}
};
int main()
{
	phanso ps1, ps2;
	cout<<"Nhap phan so thu nhat : "<<endl;
	ps1.nhap();
	cout<<"Nhap phan so thu hai : "<<endl;
	ps2.nhap();
	ps1.tong(ps2);
	return 0;
}
