process.stdin.resume();
process.stdin.setEncoding('ascii');

var input_stdin = "";
var input_stdin_array = "";
var input_currentline = 0;

process.stdin.on('data', function (data) {
    input_stdin += data;
});

process.stdin.on('end', function () {
    input_stdin_array = input_stdin.split("\n");
    main();
});

function readLine() {
    return input_stdin_array[input_currentline++];
}

/////////////// ignore above this line ////////////////////

function main() {
    var n_temp = readLine().split(' ');
    var n = parseInt(n_temp[0]);
    var q = parseInt(n_temp[1]);
    var s = readLine();
    var resArr = [];
    for(var a0 = 0; a0 < q; a0++){
        var left_temp = readLine().split(' ');
        var left = parseInt(left_temp[0]);
        var right = parseInt(left_temp[1]);
        var stringToSub = s.slice(left,right+1);
        var resObj = {};
        stringToSub = stringToSub.split("");
        var lengthOfString = stringToSub.length;
         console.log(stringToSub);
        if(lengthOfString == 1) {
                console.log("1");
        } else {
            var k = 1;
            while(k < lengthOfString) {
                if(k == 1) {
                     for(let i = 0 ; i < lengthOfString ; i++) {
                        let keyCR = '';
                        keyCR = stringToSub[i];
                        resObj[keyCR] = 0
                    }
                } else {
                    for(let i = 0 ; i < lengthOfString ; i++) {
                         let keyCR = '';
                       if(i+k <= lengthOfString && i != i+k){
                            keyCR = stringToSub.slice(i,i+k);
                            keyCR = keyCR.join("");
                      console.log("value i = ",i ,"  Value k = ",k,"  Value i+k = ",i+k," KeyCR = ",keyCR);
                            if(keyCR != '')
                                resObj[keyCR] = 0
                        }

                    }
                }

                k++;
            }
            console.log(resObj);
            resObj = Object.keys(resObj).length + 1;
            //console.log(resObj);
        }
    }
}
