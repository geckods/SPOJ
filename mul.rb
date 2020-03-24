# your code goes here
t = gets.to_i
arr = []
t.times {arr.push gets.chomp.split(" ").map(&:to_i)}
arr.each do |x|
	puts x.inject(:*)
end
