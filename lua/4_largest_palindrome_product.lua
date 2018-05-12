function checkPalindrome(n)
    local original, reversed = n, 0

    while n ~= 0 do
        reversed = reversed * 10 + n % 10
        n = math.floor(n / 10)
    end

    return original == reversed
end

local largest = 0;

for i = 100, 999 do
    for j = i, 999 do
        local result = i * j
        if checkPalindrome(result) then
            if result > largest then
                largest = result
            end
        end
    end
end

print(largest)