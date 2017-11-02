from distutils.core import setup
setup(name='utbspendfrom',
      version='1.0',
      description='Command-line utility for popbit "coin control"',
      author='Gavin Andresen',
      author_email='gavin@popbitfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )