func makeArrayConsecutive2(statues: [Int]) -> Int {
    let sort = statues.sorted(by: <);
    let size = statues.count;
    var element = sort[0];
    var index = 1;
    var result = 0;
    while index < size
    {
        if element + 1 == sort[index]
        {
            element = sort[index];
            index += 1;
        } else
        {
            element += 1;
            result += 1;
        }
    }
        return result;
}
