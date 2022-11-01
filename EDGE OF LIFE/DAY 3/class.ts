class Mobile{
	// member variable does not need var keyword
	price: number = 212;
	name: string;


	constructor(n: number, s : string){
		console.log("\nConstructor of Mobile Just Called\n");
		this.price = n;
		this.name = s; 
	}


	// function keyword also not needed
	getName(){
		return this.name;
	}

	getPrice(){
		// here we can use var inside the method
		//var tax = 1.8;
		// return this.price * tax;
		return this.price;
	}

}

var m1 = new Mobile(18000, "Note 10 Pro");
// m1.price = 1212;
var p1 : number = m1.getPrice();
console.log("\nPrice : " + p1);
var s1 : string = m1.getName();
console.log("\nName : " + s1);

