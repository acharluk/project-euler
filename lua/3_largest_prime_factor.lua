local number = 600851475143
local factor = 0

while number > factor do
    factor = (function(n)
        for i = 2, math.sqrt(n) do
            if n % i == 0 then
                print("prime: ", i, n)
                return i
            end
        end
        print("last: ", n)
        return n
    end)(number)

    number = number / factor
    print("Number / Factor:", number, factor)
end

print(factor)