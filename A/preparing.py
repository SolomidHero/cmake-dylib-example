import sys
import os

program_text = '''
  int add(int a, int b) {
    return a + b;
  }
  '''

def main():
  directory = os.path.dirname(__file__)
  filename = directory + '/index.h'
  with open(filename, "w") as f:
    f.write(program_text)
  
  print(f"File was created at: {filename}")

if __name__ == '__main__':
  main()