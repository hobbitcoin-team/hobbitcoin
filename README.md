Hobbitcoin integration/staging tree
================================

http://www.hobbit.co.in

Copyright (c) 2009-2013 Bitcoin Developers
Copyright (c) 2011-2013 Litecoin Developers
Copyright (c) 2011-2014 Hobbitcoin Developers

What is Hobbitcoin?
----------------

Hobbitcoin is a lite version of Bitcoin using scrypt as a proof-of-work algorithm.  It is based on Litecoin
 - 1 minute block targets
 - subsidy halves in 2.1M blocks (~4 years)
 - ~10 billion total coins
 - 1000 coins per block with an additional 50,000 bonus payout possible based on the current block number
    - 0-100,000 blocks => 50% chance of 50,000 bonus
    - 100,000-200,000 blocks => 25% chance of 50,000 bonus
    - 200,000-300,000 blocks => 25% chance of 50,000 bonus
    - 300,000-400,000 blocks => 15% chance of 50,000 bonus
    - 400,000-500,000 blocks => 10% chance of 50,000 bonus
    - 500,000-600,000 blocks => 5% chance of 50,000 bonus
    - 600,000-700,000 blocks => 5% chance of 50,000 bonus
    - 700,000-800,000 blocks => 5% chance of 50,000 bonus
    - 800,000-900,000 blocks => 5% chance of 50,000 bonus
 - 240 blocks to retarget difficulty

For more information, as well as an immediately useable, binary version of
the Hobbitcoin client sofware, see http://www.hobbit.co.in


License
-------

Hobbitcoin is released under the terms of the MIT license. See `COPYING` for more
information or see http://opensource.org/licenses/MIT.

Development process
-------------------

Developers work in their own trees, then submit pull requests when they think
their feature or bug fix is ready.

If it is a simple/trivial/non-controversial change, then one of the Hobbitcoin
development team members simply pulls it.

If it is a *more complicated or potentially controversial* change, then the patch
submitter will be asked to start a discussion (if they haven't already) on the
[mailing list](http://sourceforge.net/mailarchive/forum.php?forum_name=bitcoin-development).

The patch will be accepted if there is broad consensus that it is a good thing.
Developers should expect to rework and resubmit patches if the code doesn't
match the project's coding conventions (see `doc/coding.txt`) or are
controversial.

The `master` branch is regularly built and tested, but is not guaranteed to be
completely stable. [Tags](https://github.com/bitcoin/bitcoin/tags) are created
regularly to indicate new official, stable release versions of Amcecoin.

Testing
-------

Testing and code review is the bottleneck for development; we get more pull
requests than we can review and test. Please be patient and help out, and
remember this is a security-critical project where any mistake might cost people
lots of money.

### Automated Testing

Developers are strongly encouraged to write unit tests for new code, and to
submit new unit tests for old code.

Unit tests for the core code are in `src/test/`. To compile and run them:

    cd src; make -f makefile.unix test

Unit tests for the GUI code are in `src/qt/test/`. To compile and run them:

    qmake BITCOIN_QT_TEST=1 -o Makefile.test bitcoin-qt.pro
    make -f Makefile.test
    ./hobbitcoin-qt_test

