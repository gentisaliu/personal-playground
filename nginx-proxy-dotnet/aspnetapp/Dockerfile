FROM microsoft/aspnetcore:1.1.2
WORKDIR /app
COPY published ./

EXPOSE 80

ENTRYPOINT ["dotnet", "aspnetapp.dll"]