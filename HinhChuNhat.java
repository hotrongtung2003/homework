import java.util.Scanner;
public class HinhChuNhat 
{
    private double dai, rong;
 
    // khởi tạo phương thức constructor có tham số
    public HinhChuNhat(double dai, double rong) {
        this.dai = dai;
        this.rong = rong;
    }
 
    //khởi tạo phương thức constructor không có tham số
    public HinhChuNhat() {
    }
        Scanner sc = new Scanner(System.in);
    public void nhap()
        {
            System.out.print("Nhap chieu dai : ");
            dai = sc.nextInt();
            System.out.print("Nhap chieu rong : ");
            rong = sc.nextInt();
        } 
    double tinhDienTich() {
        return dai * rong;
    }
 
    //tạo hàm tính chu vi
    double tinhChuVi() {
        return (dai + rong) * 2;
    }
    public void xuat()
        {
            System.out.println("Chu vi hinh chu nhat la : : " + tinhChuVi());
            System.out.println("Dien tich hinh chu nhat  : " + tinhDienTich());
        }
    public static void main(String[] args) {
        HinhChuNhat hcn = new HinhChuNhat();
        hcn.nhap();
        hcn.xuat();
    }
}
