public class Class_and_object{
	public static void main(String [] args){
		System.out.println("Jay Ganesh !");
		
		// creating class object
		Mobile m1 = new Mobile();
		m1.name = "Note 11";
		m1.price = 98111;

		System.out.println("Name of Mobile is " + m1.name+" and price is " + m1.price);
		
		m1.running();
		
		// Polymorphism
		// Compile Time Polymorphism
		m1.performance();


		int p = m1.performance(19);
		System.out.println("Performance : "+p);
		
						// Mobile() this is constructor.
		Mobile m2 = new Mobile();
		m2.name = "Galaxy s1";
		m2.price = 120000;

		m2.performance(89);


		Mobile m3 = new Mobile("iPhone 12", 78000);
		System.out.println("Name of Mobile is " + m3.name+" and price is " + m3.price);
		

		System.out.println("**************************************************");

		SmartPhones s1 = new SmartPhones("NOKIA G1", 19999);
		s1.performance(1999);

		s1.performance();
		// static 
		// if you want to access the class properties without creating the
		// object of that class.
		int c = Mobile.count;
		System.out.println("Till That there are "+c+ " Mobiles are created");
	}
}

// In JAVA all classes Parent is Object Class.

class SmartPhones extends Mobile{
	public SmartPhones(String name ,  int price){
		// super call the Parent constructor.
		super(name, price);
	}

	// Runtime Polymorphism
	void performance(){
		System.out.println("This is Runtime Polymorphism has "+name+" and Price : "+price);
	}
}


class Mobile{
	String name;
	int price;
	static int count;

	// simple contructor
	public Mobile(){ // if dont create constructor its bydefault created.
		System.out.println("Mobile object is created !");
		count++;
	}

	// we can overload the contructor
	public Mobile(String name, int newPrice){
		// first use : calling another constrctor of the same class from another constrctor
		this();

		// telling that this belog to particular class.
		this.name = name;
		// so no confusion although no errors.

		price = newPrice;
		System.out.println("New oV Constructor ! Created");
		//count++;
		
	}


	// methods
	void running(){
		System.out.println("Actually "+name+" is running.");
	}
	void performance(){
		System.out.println("Only Performance !");
		
	}

	int performance(int running_hrs){
		System.out.println("Hours : "+running_hrs);
		return running_hrs*10;
	}
}