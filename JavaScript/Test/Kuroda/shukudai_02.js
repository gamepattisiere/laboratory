function isPrime(n) {
	var sosu = true;
	for (var i = 2; i < n; i++){
		if(n/i == parseInt(n/i)){
			//素数ではない
			sosu = false;
		}
	}
	return(sosu);
}

var number = 23;

if (isPrime(number)) {
	document.writeln(number + " は素数です");
} else {
	document.writeln(number + " は素数ではありません");
}