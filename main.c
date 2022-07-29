int main()
{
	char judgeString[20] = { 0 };
	printf("欢迎您使用深南牌“智能关机程序”！\n");
	printf("您的电脑将在3s后执行定时定时关机！\n");
	Sleep(3000);
	system("shutdown -s -t 60");
	printf("输入：“我是猪！”，可取消定时关机！\n");
	while (1)
	{
		printf("请输入：");
		scanf("%s", judgeString);
		if (strcmp("我是猪！", judgeString) == 0)
		{
			system("shutdown -a");
			printf("自动关机程序已关闭！\n");
			printf("感谢您使用深南牌“智能关机程序”！\n");
			break;
		}
		else
		{
			printf("您的输入有误！请输入“我是猪！”,否则电脑将要关机！\n");
		}
	}
}
