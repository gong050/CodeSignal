func adjacentElementsProduct(inputArray: [Int]) -> Int {
    var max = inputArray[0] * inputArray[1];
    for i in 2..<inputArray.count
    {
        if max < inputArray[i-1] * inputArray[i] { max = inputArray[i-1]*inputArray[i] }
    }
    return max;
}