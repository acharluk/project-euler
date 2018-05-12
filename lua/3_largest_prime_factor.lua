local number = 600851475143
local factor = 0

while number > factor do
    factor = (function(n)
        for i = 2, math.sqrt(n) do
            if n % i == 0 then
                return i
            end
        end
        return n
    end)(number)

    number = number / factor
end

print(factor)