#include<stdio.h>
int main()
{
	int a[100];
	int chon,m;
	do
	{
	printf("MENU\n");
	printf("1. Nhap so phan tu can nhap va gia tri cac phan tu\n");
	printf("2. In ra gia tri cac phan tu quan ly\n");
	printf("3, In ra gia tri lon nhap cua mang\n");
	printf("4. In ra cac phan tu la so nguyen to trong mang\n");
	printf("5. Them phan tu vao mang\n");
	printf("6. Xoa mot phan tu trong mang\n");
	printf("7. sap xep mang theo thu tu tang dan\n");
	printf("8. Tim kiem phan tu(nguoi dung nhap) va in ra vi tri index cu phan tu do\n");
	printf("9. Thoat\n");
	printf("moi chon 1 trong 9 cai: ");
	scanf("%d",&chon);
	switch(chon)
		{
			//Nhap so phan tu can nhap va gia tri cac phan tu
			case 1:
			{
			printf("moi nhap so phan phan tu can nhap: ");
			scanf("%d",&m);
			for(int i=0;i<m;i++)
				{
					printf("phan tu thu %d: ",i);
					scanf("%d",&a[i]);
				}
				printf("\n");
				break;
			}
			//In ra gia tri cac phan tu quan ly
			case 2:
			{
			printf("cac phan tu dang quan ly: \n");
			for(int i =0;i<m;i++)
				{
					printf("%d, ",a[i]);
				}	
				printf("\n");
				break;
			}
			//In ra gia tri lon nhap cua mang
			case 3:
			{
				int max=a[0];
				for(int i=0;i<m;i++)
				{
					if(a[i]>max)
					{
						max=a[i];
					}
				}
				printf("gia tri lon nhat trong mang: %d",max);
				printf("\n");
				
				break;
			}
			//In ra cac phan tu la so nguyen to trong mang
			case 4:
			{
				printf("cac phan tu la so nguyen to: \n");
				for(int i=0;i<m;i++)
				{
					if(a[i]%2==0)
					{
						printf("%d, ",a[i]);
					}
				}
				printf("\n");
				break;
			} 
			//Them phan tu vao mang
			case 5:
			{
				printf("mang bn dau: ");
					for(int i=0;i<m;i++)
				{
					a[i]=i+1;
				}
				for(int i=0;i<m;i++ )
				{
					printf("%d, ",a[i]);
				} 
				printf("\n");
				int ptmoi;
				printf("moi nhap phan tu moi: ");
				scanf("%d",&ptmoi);
				a[m]=ptmoi;
				m++;
				printf("mang sau khi them: ");
				for(int i=0;i<m;i++)
				{
					printf("%d, ",a[i]);
				}
				printf("\n");
				break;
			}
			//Xoa mot phan tu trong mang
			case 6:
			{
				int xoa;
				printf("mang bn dau: ");
				for(int i=0;i<m;i++ )
				{
					printf("%d, ",a[i]);
				} 
				printf(" \nmoi nhap gia tri can xoa(0-%d): ",m-1);
				scanf("%d",&xoa);
				if(xoa<0||xoa>=m)
				{
					printf("sai vi tri\n");
				}
					else
					{
						for(int i=xoa;i<m-1;i++)
						{
							a[i]=a[i+1];
						}
						m--;
						printf("mang sau khi xoa: \n");
						for(int i=0;i<m;i++)
						{
							printf("%d, ",a[i]);							
						}					
					}
            	printf("\n");
				break;
			}
			//sap xep mang theo thu tu tang dan
			case 7:
			{
				
					printf("mang chua sap xep\n");
					for(int i=0;i<m;i++)
					{
						printf("%d, ",a[i]);
					}
					for(int i=0;i<m-1;i++)
					{
						int min =i;
						for(int j=i+1;j<m;j++)
						{
							if(a[j]<a[min])
							{
								min =j;
							}
						}
						int temp=a[min];
						a[min]=a[i];
						a[i]=temp;
					}
					printf("\nmang sau sap xep");
					for(int i=0;i<m;i++)
					{
						printf("%d, ",a[i]);
					}
					printf("\n");
				break;
			}
			//Tim kiem phan tu(nguoi dung nhap) va in ra vi tri index cu phan tu do
			case 8:
			{
				int check=0;
				int giatri;
				printf("moi nhap gia tri can tim\n");
				scanf("%d",&giatri);
				for(int i=0;i<m;i++)
				{
					if(a[i]==giatri)
					{
						printf("phan tu thu %d xuat hien tai vi tri a[%d]",giatri,i);
						check=1;
						break;
					}
				}
				if(check==0)
				{
					printf("pha tu ko ton tai\n");
				}
				printf("\n");
				break;
			}
			//Thoat
			case 9:
			{
				default:
				break;
			}								
		}
		
	
	}
	while(chon>0&&chon<9);
	
	return 0;
}	
