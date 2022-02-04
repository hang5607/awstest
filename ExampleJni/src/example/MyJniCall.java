package example;

public class MyJniCall {

	static{
		System.load("C:\\example\\MyJni\\Debug\\MyJni.dll");
	}

	public static void main(String[] args) {
		MyJni myjni = new MyJni();
		String  response =  myjni.answer("hi");
		System.out.println(response);
	}
}
