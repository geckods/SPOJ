$hash = Hash.new(-1)
$hash[0] = 1

def binarysearch(rangeleft,rangeright,condition())
  
  if rangeleft == rangeright
    return rangeleft
  end

  mid = (rangeleft+rangeright)/2
  if condition(mid)
    return binarysearch(rangeleft,mid,condition)
  else
    return binarysearch(mid+1,rangeright,condition)
  end
end



def f(z)
  ans = $hash[z]
  if $hash[z] == -1
    
    ans = z*f(z-1)
    $hash[z] = ans
  end 
  return ans
end

def g(a,z)
  return a**z
end

def findn(a)
  z = 1
  prevz = 1
  
  while (f(z)<g(a,z))
    prevz = z
    z *= 2
  end

  while z!= prevz
    mid = (z+prevz)/2
    if(f(z)<g(a,z))
      prevz = mid+1
    else
      z = mid
    end
  end

  return z
end

#f(100000)
(0..1000000).each do |z|
  f(z)
end


t = gets.to_i
arr = []

t.times {arr.push gets.to_i}

arr.each do |x|
  puts findn(x)+1
end
