public class Sample{

	public static void main(String [] args){
		System.out.println("Jay Ganesh !");
		int n = 10;

		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n-i; j++){
				System.out.print("   ");
			}

			for(int k = 1; k <= (i*2)-1; k++){
				System.out.print(" "+k+" ");
			}
			
			System.out.println();
		}
	}
}