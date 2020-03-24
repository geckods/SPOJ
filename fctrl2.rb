$hash = Hash.new(0)
$hash[0]=1

def factorial(x)
  ans = $hash[x]
  if ans != 0
    return ans
  else
    ans = x*factorial(x-1)
    $hash[x] = ans
    return ans
  end
end

 
t = gets.to_i


t.times do
  puts factorial(gets.to_i)
end
