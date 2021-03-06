#define     NAME    "Section1.2 window base"  //タイトルバーに表示するテキスト
#include    <windows.h>

//プロトタイプ宣言
LRESULT  CALLBACK   WndProc(HWND, UINT, WPARAM, LPARAM);
int      WINAPI     WinMain(HINSTANCE, HINSTANCE, LPSTR, int);

//Windws イベント用関数
LRESULT  CALLBACK  WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam){
    
    //渡された message から、イベントの種類を解析する
    switch(msg){
    //----終了処理----
    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    
    //----デフォルトの処理----
    default :
        return DefWindowProc(hWnd,msg,wParam,lParam);
    }
    
    return 0L;
}

//Windows Main 関数
int  WINAPI  WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance,
                     LPSTR lpCmdLine, int nCmdShow ){
    HWND        hWnd;
    MSG         msg;
    
    // Set up and register window class
    WNDCLASS wc = { CS_CLASSDC,
                    WndProc,                                //イベントcallback関数
                    0,
                    0,
                    hInstance,
                    NULL,                                   //アイコン
                    LoadCursor( NULL, IDC_ARROW ),          //マウスカーソル
                    (HBRUSH) GetStockObject( WHITE_BRUSH ), //背景色
                    NULL,                                   //メニュー
                    NAME };                                 //クラス名
    if( RegisterClass( &wc ) == 0 ) return FALSE;
    
    //ウインドウ生成
    hWnd = CreateWindow( NAME,                  //タイトルバーテキスト
                         NAME,                  //クラス名
                         WS_OVERLAPPEDWINDOW,   //ウインドウスタイル
                         CW_USEDEFAULT,         //ウインドウ左上x座標
                         CW_USEDEFAULT,         //ウインドウ左上y座標
                         CW_USEDEFAULT,         //ウインドウ幅
                         CW_USEDEFAULT,         //ウインドウ高さ
                         NULL,                  //親ウインドウのハンドル
                         NULL,
                         hInstance,
                         NULL );
    if( !hWnd ) return FALSE;
    
    ShowWindow( hWnd, nCmdShow );     //Window を表示
    UpdateWindow( hWnd );             //表示を初期化
    SetFocus( hWnd );                 //フォーカスを設定
    
    while( GetMessage( &msg, NULL, 0, 0 ) ){
        TranslateMessage( &msg );
        DispatchMessage( &msg );
    }
    return msg.wParam;
}
