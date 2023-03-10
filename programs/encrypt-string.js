/**
 * Input:
S = "aaaaaaaaaaa"
Output:
ba 
Explanation: 
aaaaaaaaaaa
Step1: a11 (a occurs 11 times)
Step2: a11 is ab [since 11 is b in
hexadecimal]
Step3: ba [After reversing]
 * 
*/

function encryptString(input) {
  if (input == "") return input;
  const arr = input.split("").reverse();
  let lastChar = arr.shift();
  let count = 1;
  let a = "";

  for (let c of arr) {
    if (lastChar != c) {
      a += count.toString(16) + lastChar;
      lastChar = c;
      count = 1;
    } else {
      count++;
    }
  }
  a += +count.toString(16) + lastChar;

  return a;
}

const testStr = "aaabbbbbbbbbbbbbbbccccc";
const result = encryptString(testStr);
console.log(result);
