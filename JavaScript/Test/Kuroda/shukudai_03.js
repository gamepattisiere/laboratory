//���ׂ����l�͂�����
var shirabe = 10;

var array = new Array();
array[0] = 0;
array[1] = 1;

function fibonacci(n) {
	var suuji;
	if (n < 3) {
		document.writeln("�P�Ԃ߂ƂQ�Ԃ߂͖����ˁB�P������B");
		suuji = null;
	} else {
		for (var i = 2; i <= n; i++) {
			suuji = array[0] + array[1];
			array[0] = array[1];
			array[1] = suuji;
		}
	}
	return (suuji);

}

var result = fibonacci(shirabe);
if(result != null)	document.writeln(shirabe + "�Ԗڂ̃t�B�{�i�b�`���� "+result);