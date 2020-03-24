# your code goes here
n = gets.to_i
arr = []
n.times {arr.push gets.chomp.split(" ").map(&:to_i)}
arr.each do |x|
	puts (x[0].to_s.reverse.to_i+x[1].to_s.reverse.to_i).to_s.reverse.to_i
end
