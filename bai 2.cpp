#include<stdio.h>
int main()
{	
	int chon;
	do
	{
		printf("MENU\n");
		printf("1. Nhap kich co va gia tri cac phan tu cau mang\n");
		printf("2. In gia tri cac phan tu cau mang theo ma tran\n");
		printf("3. In ra cac phan tu nam tren duong bien va tinh tich\n");
		printf("4. In ra cac phan tu nam tren duong cheo chinh\n");
		printf("5. In ra cac phan tu nam tren duong cheo phu\n");
		printf("6. Sap xep duong cheo theo thu tu tang dan\n");
		printf("7. Tim kiem mot phan tu va in ra vi tri cua phan tu do trong mang\n");
		printf("8. Thoat\n");
		printf("\n");
		printf("moi chon 1 trong 8 cai: ");
		scanf("%d",&chon);
		int a[100][100];
		int n,m;
		switch(chon)
		{
			//Nhap kich co va gia tri cac phan tu cau mang
			case 1:
			{
				printf("moi nhap hang: ");
				scanf("%d", &m);
				printf("moi nhap cot: ");
				scanf("%d", &n);
				printf("moi nhap gia tri cua mang\n");
				for(int i=0;i<m;i++)
				{
					for(int j=0;j<n;j++)
					{
						printf("a[%d][%d]: ", i,j);
						scanf("%d",&a[i][j]);
					}
				}
					printf("\n");
				break;
			}
		
			//In gia tri cac phan tu cau mang theo ma tran
			case 2:	
			{
				printf("ma tran:\n");
				for(int i=0;i<m;i++)
				{
					for(int j=0;j<n;j++)
					{
						printf("%5d",a[i][j]);
					}
					printf("\n");
				}
					printf("\n");
				break;
			}
			//In ra cac phan tu nam tren duong bien va tinh tich
			case 3:
			{
				int tich=1;
				printf("cac phan tu nam tren bien cua ma tran: ");
				for(int i=0;i<m;i++)
				{
					for(int j=0;j<n;j++)
					{
					if(i==0||i==m-1||j==0||j==n-1)
						{
							printf("%d, ",a[i][j]);
							tich *=a[i][j];
						}
					}
				}
				printf("\ntich bien cua ma tran: %d",tich);
				printf("\n");
				break;
			}
			//In ra cac phan tu nam tren duong cheo chinh
			case 4:
			{
			
				for(int i=0;i<m;i++)
				{
					for(int j=0;j<n;j++)
					{
						if(i==j)
						{
							printf("%d, ",a[i][j]);
						}
					}
				}	
				printf("\n");
				break;
			}
			//In ra cac phan tu nam tren duong cheo phu
			case 5:
			{
				for(int i=0;i<m;i++)
				{
					int j=m-1-i;
					printf("%d, ",a[i][j]);
				}
				printf("\n");
				break;
			}
			//Sap xep duong cheo theo thu tu tang dan
			case 6:
			{
				int d[100];
				printf("duong cheo truoc sap xep: ");
				for(int i=0;i<m;i++)
				{
					for(int j=0;j<m;j++)
					{
						if(i==j)
						{
						printf("%d, ",a[i][j]);
						}
					}
				}
			for(int i=0;i<m;i++)
			{
				d[i]=a[i][i];
			}
			printf("\nsau khi sap xep");
			for(int i=0;i<(m)-1;i++)
				{
					for(int j=0;j<(m)-i-1;j++)
					{
						if(d[j+1]<d[j])
						{
							int temp =d[j];
							d[j]=d[j+1];
							d[j+1]=temp;
						}
					}
				}
				for(int i=0;i<m;i++)
				{
					printf("%d, ",d[i]);
				}
				printf("\n");
				break;
			}
			case 7:
			{
				int x,z,y;
				printf("moi nhap phan tu can tim");
				scanf("%d",&y);
				x=-1;
				z=-1;
				for(int i=0;i<m;i++)
				{
					for(int j=0;j<m;j++)
					{
						if(y==a[i][j])
						{
							x=i;
							z=j;
							printf("vi tri so can tim nam o a[%d][%d]",x,z);
							printf("\n");
							break;
						}
						
					}
				
				}
				if(x==-1&&z==-1)
				{
					printf("vi tri ko ton tai");
				}
				break;
			}
			case 8:
			{
			  default :
			  {
			  	printf("dung chuong trinh");	
			  }  
			  printf("\n");
			}
			break;							  														
		}

	}while(chon>0 && chon<8);
		return 0;
}
