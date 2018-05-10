local term1, term2, sum = 1, 2, 0

while term2 < 4000000 do
    if term2 % 2 == 0 then
        sum = sum + term2
    end

    term1, term2 = term2, term1 + term2
end

print(sum)