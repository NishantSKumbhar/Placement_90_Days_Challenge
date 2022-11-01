// Annonymous Function

var x  = function(n1: number, n2: number): number{
	return n1 + n2;
}

var ans: number = x(1, 3);

console.log("answer : " + ans);



// Fat Arrow/ Lambda

var addi = (n1: number, n2: number): number=>{
	return n1 + n2;
}

var ans1 = addi(1, 34);

console.log("\nAnswer : "+ans1);