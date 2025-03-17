a,b = gets.split.map(&:to_i)
puts a+b
puts a-b
puts a*b
if b == 0
  puts "ERROR"
else
  puts "%.2f" % (a/b.to_f).round(2)
end