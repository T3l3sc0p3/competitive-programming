a,b = gets.split.map(&:to_f)
if a == 0 && b != 0
  puts "NO"
elsif a == b && b == 0
  puts "WOW"
else
  puts sprintf("%.2f", -b/a)
end