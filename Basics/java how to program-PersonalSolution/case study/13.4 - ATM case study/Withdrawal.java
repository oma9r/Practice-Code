public class Withdrawal extends Transaction
{
	private int amount;
	private Keypad keypad;
	private CashDispenser cashDispenser;

	
	private final static int CANCELED = 6;

	public Withdrawal(int userAccountNumber, Screen atmScreen, BankDatabase atmBankDatabase,Keypad atmKeypad, CashDispenser atmCashDispenser)
	{
		super(userAccountNumber,atmScreen,atmBankDatabase);

		keypad = atmKeypad;
		cashDispenser = atmCashDispenser;
	}

	@Override
	public void execute()
	{
		boolean cashDispensed = false;

		double availableBalance;

		BankDatabase bankDatabase = getBankDatabase();
		Screen screen = getScreen();

		do
		{
			amount = diplayMenuOfAmounts();
			
			if(amount != CANCELED)
			{
				availableBalance = BankDatabase.getAvailableBalance(getAccountNumber() );

				if(amount <= availableBalance)
				{
					if(cashDispenser.isSufficientCashAvailable(amount) )
					{
						bankDatabase.debit(getAccountNumber() , amount);

						cashDispenser.dispenseCash(amount);
						cashDispensed = true;
					
						screen.displayMessageLine("\nYour cash has been" + "dispened. Plesae take your cash now.");
					}	