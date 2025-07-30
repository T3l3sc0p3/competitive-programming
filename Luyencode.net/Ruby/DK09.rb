year = gets.to_i
if year <= 0 || year > 100000
  puts "INVALID"
elsif (year % 4 == 0 && year % 100 != 0) || year % 400 == 0
  puts "YES"
else
  puts "NO"
end