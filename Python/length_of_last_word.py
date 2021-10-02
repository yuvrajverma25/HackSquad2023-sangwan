#Given a string s consists of some words separated by spaces, return the length of the last word in the string. If the last word does not exist, return 0.

def lenOfLastWord(str):
  count = 0
  for x in reversed(str):
      if x == ' ':
          return count
      else:
          count += 1
  return count

# Time Complexity : O(n)
# Space Complexity : O(1)