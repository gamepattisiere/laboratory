function isPrime(n) {
	var sosu = true;
	for (var i = 2; i < n; i++){
		if(n/i == parseInt(n/i)){
			//�f���ł͂Ȃ�
			sosu = false;
		}
	}
	return(sosu);
}

var number = 23;

if (isPrime(number)) {
	document.writeln(number + " �͑f���ł�");
} else {
	document.writeln(number + " �͑f���ł͂���܂���");
}