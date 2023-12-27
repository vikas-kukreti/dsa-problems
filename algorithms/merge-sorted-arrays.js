function mergeSortedArrays(array1, array2) {
    let i = 0;
    let j = 0;
    const result = [];

    while (i < array1.length && j < array2.length) {
        if (array1[i] < array2[j]) {
            result.push(array1[i++]);
        } else {
            result.push(array2[j++]);
        }
    }

    while (i < array1.length) {
        result.push(array1[i++]);
    }

    while (j < array2.length) {
        result.push(array2[j++]);
    }

    return result;
}

const result = mergeSortedArrays([0, 3, 4, 31, 32, 40], [4, 6, 30, 31, 40, 41]);
console.log(result);
