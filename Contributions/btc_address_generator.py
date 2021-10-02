from bitcoinlib.wallets import Wallet, wallet_delete
from bitcoinlib.mnemonic import Mnemonic

#TO use this code install bitcoinlib

def wallet_gen(wallet_name):
    passphrase = Mnemonic().generate()
    wallet = Wallet.create(wallet_name, keys=passphrase, network='bitcoin')
    key = wallet.new_key().address
    print("For the wallet " + str(wallet_name) + "\n"
            "This is the passphrase: " + str(passphrase) + "\n"
            "This is the address/key: " + str(key))

if __name__ == "__main__":
    print("Hi, welcome to BTC Wallet Generator\n")
    wname = input("Write the name for the wallet --> ")
    wallet_gen(wname)